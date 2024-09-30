# 28. Find the Index of the First Occurrence in a String
My first try (01.10.2024) was not okay, originally, I'd like to use 2 pointer to run throuh two string.
Idea: 1. declare 2 pointer, and run through haystack 
      2.when the character is identical, then move the pointer of needle, or it's always zero
But there is problem for the case has repetitive word in haystack, especially already going through them.
haystack ="mississippi" ; needle = "issip"

```
(Wrong one Record)
int ptr_needle{0};
        int index{-1};

        for( int i = 0 ; i <= haystack.size(); i++){
            if ( ptr_needle == needle.size()){
                index=i-ptr_needle;
                break;
            }
            if(haystack[i] == needle[ptr_needle])
                ptr_needle++;
            else{
                if(haystack[i]== needle[0])
                    ptr_needle=1;
                else 
                    ptr_needle=0;
            }
                
        }
        return index;
```

There are 4 suggested solution, 1st one is sliding windown is very intutive for me.