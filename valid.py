#!/usr/local/bin/python3.6

import itertools
import sys


def groups_from_result_string(res_str):
    try:
        left = res_str.index('(')
        right = res_str.rindex(')')
        groups_str = res_str[left+1:right]
        groups = groups_str.split(') (')
        return groups
    except ValueError:
        return []


def name_from_result_string(res_str):
    return res_str.split()[0]


def group_passes(group):
    def all_zs(s):
        return s[0] == 'z' and len(set(s)) == 1
    elems = group.split()
    if any(all_zs(elem) for elem in elems):
        return True
    return len(set(elems)) == 1


class Result(object):
    def __init__(self, result_string):
        self.groups = groups_from_result_string(result_string)
        self.name = name_from_result_string(result_string)


    def analyze(self):
        for group in self.groups:
            if group_passes(group):
                print('{} pass'.format(self.name))
            else:
                print('{} FAIL'.format(self.name))


if __name__ == '__main__':
    for result_string in map(str.rstrip, sys.stdin):
        res = Result(result_string)
        res.analyze()
