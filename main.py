# пытался пройтись жадно но не получилось
def split_gpus(gpus):
    total_sum = sum(gpus)
    
    if total_sum % 2 != 0:
        return ((), (), tuple(gpus))
    
    target = total_sum // 2
    n = len(gpus)
    gpus_sorted = sorted(gpus)
    
    server_0 = []
    server_1 = []
    
    for gpu in gpus_sorted:
        if sum(server_0) + gpu <= target:
            server_0.append(gpu)
        else:
            server_1.append(gpu)
    if sum(server_0) == sum(server_1):
        return (tuple(sorted(server_0)), tuple(sorted(server_1)), ())
    
    return ((), (), tuple(gpus))

# Примеры
print(split_gpus((1, 1)))  # Output: ((1), (1), ())
print(split_gpus((1, 1, 2, 1)))  # Output: ((1, 1), (2), (1))
print(split_gpus((3, 1)))  # Output: ((), (), (1, 3))
