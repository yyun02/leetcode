class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            print ("first false")
            return False
        
        #s_set = set()
        #t_set = set()

        s_list = list()
        t_list = list()

        for i in range(len(s)):
            #s_set.add(s[i])
            #t_set.add(t[i])

            if s[i] not in s_list:
                s_list.insert(len(s_list), s[i])

            if t[i] not in t_list:
                t_list.insert(len(t_list), t[i])

            elif s[i] in s_list and t[i] in t_list:
                if s_list.index(s[i]) != t_list.index(t[i]):
                    return False

            if len(s_list) != len(t_list):
                print ("sec false")
                return False


        return True

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        return [*map(s.index, s)] ==[*map(t.index, t)]
