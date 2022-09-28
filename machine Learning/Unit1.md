# Content

- [Fundamentals Of Machine Learning](#fundamentals-of-machine-learning)
- [Steps Used in Machine Learning](#what-are-the-steps-used-in-machine-learning)
- [Application of Machine Learning](#application-of-machine-learning)
- [Why Errors](#why-errors)
- [Distance Metrics in Machine Learning](#distance-metrics-in-machine-learning)
- [Bias and Variance](#bias-and-variance)

# Fundamentals of Machine Learning

## _Types of ML_

* Supervised Learning
    * X,y(pre-classified training example)
    * Given an observation x, What is the best label for y?
* Unsupervised Learning
    * X
    * Given a set of x's, cluster or summarize them
* Semi-supervised Learning
* Reinforcement Learning
    * Determine what to do based on rewards and punishments.

## Data exploration

* data 
* dataset
* bigdata

> Bigdata -> volume - velocity - variety  

### <u>Types of data</u>
1. Qualitative Data 
    * It is data that uses words and descriptions
1. Quantitative Data
    * It is data that is expressed in numbers

# What are the steps used in Machine Learning
There are 5 basic steps used in ML
1. Collecting the data
1. Preparing the data
1. Training/Testing the model
1. Evaluating the model
1. Improving the performance

<br>

# Application of Machine Learning
- Healthcare
- Fraud Detection
- Recommendation
- Online Search
- Natural Language Processing(`NLP`)
- Smar cars
- Banking and Finance

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
- low bias - high variance: it is **_overfitting_** (predictions are inconsistent and accurate on average)
- high bias - low variance: it is **_underfitting_** (predictions are consistent and inaccurate on average)

---

-  bias is one type of error that occus due to wrong assumptions about data such as assuming datat is linear when in reality, data follows a complex function.
- on the other hand, variance get introduced with high sensitive to variations in training data. this is also is one type of error since we want to make our model robust against noise.
- In general,  $(bias^2 + variance = MSE)$