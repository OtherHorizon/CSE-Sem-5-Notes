# Support Vector Machine (SVM)
- Margin
- Support Vectors
- Line / Plane / Hyper plane
- High Gamma
- Low Gamma
- Kernel

# Pros of SVM
- It is really effective in the higher dimension
- Effective when the number of features are more than training examples
- Best algorithm when classes are separable
- The hyperplane is affected by only the support vectors thus outliers have less impact.
- SVM is suited for extreme case binary classification

# Validation
- This process od deciding whether the numerical results quantify hypothesiszed relationships between cariables, are acceptable as description of the data. is known as validation.
- Generally, an error estimation for the model is made after training, better known as evaluation of residuals.
- In this process, a numerical estimate of the difference in predicted and original responses is done, also called the training error.
- However, this only gives us an idea about how well our model does on data used to train it.
- Now its possible that the model underfitting or overfitting the data.
- So, the problem with this ecaluation technique is that it does not give an indication of how well the learner will generalize to an independent/ unseen data.


# Cross validation (`CV`)
- To evalute the performance of any machine learning model we need to test it on some unseen data.
- Based on the model performance on unseen data we can say weather our model is under-fitting/over-fitting/well generalised
- `CV` is one of the technique used to test the effectiveness of a machine learning models, it is alaso a re-sampling procedure used to ecaluate a model if we have a limited data.
- To perform `CV` we need to keep aside a sample/portion of the data on which is do not use to train the model, later use this sample for tesitng/validating.

# K-Fold Cross validation

<img src="https://miro.medium.com/max/720/1*rgba1BIOUys7wQcXcL4U5A.png"></img>

# Regularization
- The word regularization mean to make things regular or acceptable
- This is exactly why we use it for
- Regularizations are techniques used to reduce the error by fitting an fuctuin appropriately on the given training set and avoid overfitting
-  It is a techniques used for tuning the function by adding an additional penalty term in the error function.
- The additional term controls the excessively fluctuating functuon such that the coefficient don't take extreme values.
- This techniques of keeping a check or reducing the value of error coefficients are called shrinkage methods or weight decay in case of neural network.
