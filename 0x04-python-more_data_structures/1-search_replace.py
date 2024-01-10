#!/usr/bin/python3
def search_replace(my_list, search, replace):
    return [[e, replace][e is search] for e in my_list]
