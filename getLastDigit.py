def getLastDigit(a, b):
    if b == '0':
        return 1
        
        last_digit = int(a[-1])
        B = int(b)
        
        cycles = {
            0: [0], 1: [1], 2: [2, 4, 8, 6], 3: [3, 9, 7, 1],
            4: [4, 6], 5: [5], 6: [6], 7: [7, 9, 3, 1],
            8: [8, 4, 2, 6], 9: [9, 1]
        }
        
        cycle = cycles[last_digit]
        cycle_length = len(cycle)
        
        return cycle[(B - 1) % cycle_length]
a=4
b=192
getLastDigit(a,b)