import math

def activator(data, train_x, sigma):
    distance = 0
    for i in xrange(len(data)):
        distance += math.pow(data[i] - train_x[i], 2)
    return math.exp(-distance / (math.pow(sigma, 2)))
    
def grnn(data, train_x, train_y, sigma):
    result = []
    out_dim = len(train_y[0])
    for dim in xrange(out_dim):
        factor, divide = 0, 0
        for i in xrange(len(train_x)):
            cache = activator(data, train_x[i], sigma)
            factor += train_y[i][dim] * cache
            divide += cache
        result.append(factor/divide)
    return result