#!/usr/bin/python3
"""
    module to create a locked class except new instance
    called first_name
"""


class LockedClass:
    """
        LockedClass - create a locked class
        Attributes:
        __slots__ : prevents creation of new instance attribute
                    except called first_name
    """
    __slots__ = ["first_name"]
