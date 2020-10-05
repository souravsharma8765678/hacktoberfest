import pandas as pd
#import numpy as np
#import matplotlib.pyplot as plt

dataset=pd.read_csv('.\ccpp.csv')
x=dataset.iloc[:,:-1].values
y=dataset.iloc[:,4].values

#splitting dataset in training and testing
from sklearn.cross_validation import train_test_split
x_train,x_test,y_train,y_test = train_test_split(x,y,test_size=0.2,random_state=0)

#fitting multiple linear regression to training set
from sklearn.linear_model import LinearRegression
regressor=LinearRegression()
regressor.fit(x_train,y_train)

#predicting the test result
y_pred=regressor.predict(x_test)
print(y_pred)
