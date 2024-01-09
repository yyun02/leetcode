Select CustomerName as [Customer Name], Notes from KCC.dbo.Customers
- shows col CustomerName(displayed as Customer Name) and Notes

Select distinct CustomerName as [Customer Name] from KCC.dbo.Customers
- no multiples

Select * from KCC.dbo.Customers
- all col

Select top(3) *from KCC.dbo.Customers
- top 3 results

Select *from KCC.dbo.Customers where State = 'WA'
- from State WA

Select *from KCC.dbo.Customers where State <> 'WA'
Select *from KCC.dbo.Customers where State != 'WA'
- NOT from State WA

Select *from KCC.dbo.Customers where State ='WA' or State = 'NY'
- OR

Select *from KCC.dbo.Customers where State IN ('WA', 'NY', 'UT')
- WA or NY or UT

Select *from KCC.dbo.Customers where State NOT IN ('WA', 'NY', 'UT')
- Not in any of those States

Select *from KCC.dbo.Customers where CustomerName = 'Tres Delicious' AND Country = 'United States'
- AND

Select *from KCC.dbo.Customers where CustomerName = 'Tres Delicious' AND (Country = 'United States' OR Country = 'France')
- ()

Select *from KCC.dbo.Customers where CustomerName Like 'A' AND (Country = 'United States' OR Country = 'France')
- Name begins with A

Select *from KCC.dbo.Customers where CustomerName NOT Like 'A%' AND (Country = 'United States' OR Country = 'France')
- Name does not begin with A

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Select *from KCC.dbo.Orders where OrderTotal >= 1000
- >=

Select *from KCC.dbo.Orders where OrderTotal between 1000 and 2000
- between

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Select OrderID, OrderDate, OrderTotal, CustomerName, Phone 
From dbo.Orders join dbo.Customers on dbo.Orders.CustomerID = dbo.Customers.CustomerID

Select OrderID, OrderDate, OrderTotal, CustomerName, Phone 
From dbo.Orders o join dbo.Customers c on o.CustomerID = c.CustomerID
- nicknames

Select OrderID, OrderDate, OrderTotal, CustomerName, Phone 
From dbo.Orders o Inner join dbo.Customers c on o.CustomerID = c.CustomerID
- Inner Join there must be both customer and order
- Right Outer Join Customer without order can exist - all customer no matter whether they have an order
- Left Outer Join All Orders even if NO customer exists

Select OrderID, OrderDate, OrderTotal, CustomerName, Phone , o.CustomerID
From dbo.Orders o Inner join dbo.Customers c on o.CustomerID = c.CustomerID
- to see customerID, need o. or c. bc they dont know which one to use


Select OrderID, OrderDate, OrderTotal, CustomerName, Phone , o.CustomerID
From dbo.Orders o Inner join dbo.Customers c on o.CustomerID = c.CustomerID
Order by OrderTotal desc
- list by order total in descending, default is aesc

Select *From dbo.Orders where OrderDate >= '2/18/2022'
- order from 2/18/2022

Select *From dbo.Orders where OrderDate >= Dateadd(month, -1, getdate())
- one month ago (in past month) from now

Select count(*)From dbo.Orders where OrderDate >= Dateadd(month, -1, getdate())
- count num of order counts

Select sum(OrderTotal)From dbo.Orders where OrderDate >= Dateadd(month, -1, getdate())
- total $ in last month

Select sum(OrderTotal)From dbo.Orders where OrderDate >= Dateadd(month, -1, getdate())
group by CustomerID
- total $ in last month grouped by ID

-- comments /* */