cc=c++
cflag=-g -Iheader
src1=source/main.cpp source/merge.cpp source/merge_sort.cpp
target=merge
$(target):$(src1)
	$(cc) $(cflag) $(src1) -o $(target)
clean:
	rm -rf $(target)
