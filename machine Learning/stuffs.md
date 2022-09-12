# Why Errors
Errors in learning are caused by:
- Limited representation (representation bias)
- Limited search (search bias)
- Limited data (variance)
- Limited Feature (Noise)

# Distance Metrics in Machine Learning

In general, there are four types of distance metric used in Machine Learning

- Euclidean Distance
- Manhattan Distance
- Minkowski Distance
- Hamming Distance

# Bias and variance

- There are various way to evalute a machine learning model. we can use 

---

- high bias -  high variance: predictuibs are inconsistent and inaccurate on average
- low bias - low variance: it is an ideal model. but we cannot achieve this
- low bias - high variance: it is overfitting (predictions are inconsistent and accurate on average)
- high bias - low variance: it is underfitting (predictions are consistent and inaccurate on average)

---

-  bias is one type of error that occus due to wrong assumptions about data such as assuming datat is linear when in reality, data follows a complex function.
- on the other hand, variance get introduced with high sensitive to variations in training data. this is also is one type of error since we want to make our model robust against noise.
- In general,  (bias) <sup>2</sup> + variance = MSE