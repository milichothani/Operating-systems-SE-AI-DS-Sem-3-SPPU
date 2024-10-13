





#!/bin/bash
it=0
echo "Welcome to employee's address book"
echo "Enter the option"
echo "1. For create"
echo "2. For Add"
echo "3. For Display"
echo "4. For Search"
echo "5. For Delete"
echo "6. For Modify"
echo "7. For View"
echo "8. For EXIT"
echo "Enter Your Choice: "
read op
case $op in
1)ech0 "Enter the name of employee database"
read db
touch "$db"
;;
2)echo "In which database employee you want to add?"
read db
echo "Enter the number of records"
read n
while[$it-It $n]
do
echo "Enter emoplyee's id: "
read id1
echo "Enter employee's name: "
read nm
echo "Enter employee's age: "
read ag
echo "Enter employess phone number: "
read ph
echo "Enter employee's designation: "
read desg
echo "Enter employee's salary: "
read sal
echo "$id1,$nm,$ag,$ph,$desg,$sal">>"$db"
echo "Data added successfully"
((it=$it+1))
done
;;
3)echo "Enter name of employee database from where is it to be displayed: "
read db
cat $db
;;
4) echo "Enter name of the employee database for where to search: "
read db
echo "Enter employee id to be search: "
read i
if[$(greo -c "$i" $db) -ep 1]
then
echo "record found"
else
echo "record not found"
fi
;;
5) echo "Enter name of the employee database from which data to be deleted: "
read db
echo "Enter the employee if to be deleted:" 
read r
sed-1  "/$r/d"$db
echo "record deleted"
;;
6) echo "Enter name of the employee database from where data is to be modified: "
read db
echo "Enter value whose record get modified"
read oi
echo "Enter new employee id"
read ni
sed -i "s/oi/$ni" $db
echo "record modified"
;;
7) echo "list of database are:"
ls 
;;
*) echo "Enter valid choice"
esac
