import streamlit as st
from datetime import date

import yfinance as yf

from fbprophet import Prophet
from fbprophet.plot import plot_plotly
from plotly import graph_objs as go

# start date
START = "2015-01-01"
TODAY = date.today().strftime("%Y-%m-%d")

# title of app
st.title("Stock Prediction App")

# stocks dropdown
stocks = ("AAPL", "FSR", "AMD", "SNDL")
selected_stocks = st.selectbox("Select stock", stocks)

# time period slider (in years)
n_years = st.slider("Number of years", 1, 5)
period = n_years * 365

# cache data to prevent constant reloading
@st.cache
# load stock data
def load_data(ticker):
    data = yf.download(ticker, START, TODAY)
    data.reset_index(inplace=True)
    return data

data = load_data(selected_stocks)

# show raw data
st.subheader("Raw Data")
st.write(data.tail())

# Plot raw data
def plot_raw_data():
    fig = go.Figure()
    fig.add_trace(go.Scatter(x=data['Date'], y=data['Open'], name="stock_open"))
    fig.add_trace(go.Scatter(x=data['Date'], y=data['Close'], name="stock_close"))
    fig.layout.update(title_text='Time Series Data', xaxis_rangeslider_visible=True)
    st.plotly_chart(fig)
    
plot_raw_data()

### Prediction forecast with fbProphet
## https://facebook.github.io/prophet/docs/quick_start.html#python-api
#list within list
df_train = data[['Date','Close']]
df_train = df_train.rename(columns={"Date": "ds", "Close": "y"})

# create prophet prediction model
m = Prophet()
m.fit(df_train)
future = m.make_future_dataframe(periods=period)
forecast = m.predict(future)

# Show raw forecast data
st.subheader('Raw Forecast Data')
st.write(forecast.tail())

# Plot forecast data
st.write(f'Forecast plot for {n_years} years')
fig1 = plot_plotly(m, forecast)
st.plotly_chart(fig1)

st.write("Forecast components")
fig2 = m.plot_components(forecast)
st.write(fig2)