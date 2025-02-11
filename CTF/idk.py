p='heTfl g as iicpCTo{7F4NRP051N5_16_35P3X51N3_V6E5926A}4'
p=list(p)
i=2
for x in p:
    v=p[i]
    p.pop(i)
    p.insert(i - 2, v)
    i+=3
    print(''.join(p))
        
print(''.join(p))