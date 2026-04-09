def odd_sum_prod(lst):
    even_prod=1
    odd_prod=1

    for num in lst:
        if num %2==0:
         even_prod *=num



        else:
         odd_prod*=num
    

    return( even_prod,odd_prod)

lst=[1,2,3,4,5,6,7,8]


result=odd_sum_prod(lst)







print(f"odd product is {result[0]} and even product is {result[1]}")












