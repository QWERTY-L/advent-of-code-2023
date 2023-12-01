cast = { # Yes, I know I could've just used an array, but I'm too lazy to change it
    '0': 0,
    '1': 1,
    '2': 2,
    '3': 3,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 7,
    '8': 8,
    '9': 9,
    'zero': 0,
    'one': 1,
    'two': 2,
    'three': 3,
    'four': 4,
    'five': 5,
    'six': 6,
    'seven': 7,
    'eight': 8,
    'nine': 9,
}

out = 0

while(True):
    inp = input()

    if(inp == 'END'):
        print(out)
        break

    posF = [inp.find(i)*((-1000)**(inp.find(i) == -1)) for i in cast.keys()] # first
    out += 10 * (posF.index(min(posF)) % 10)

    inp = inp[::-1] # reverse string
    posL = [inp.find(i[::-1])*((-1000)**(inp.find(i[::-1]) == -1)) for i in cast.keys()] # last
    out += (posL.index(min(posL)) % 10)
