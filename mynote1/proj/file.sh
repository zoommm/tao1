for aa in `ls`
do
    short_name=`echo $file|awk -F'.' '{print $1}'`
    mv $aa $short_name
done
