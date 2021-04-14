# Requirements
## Introduction
- A bank is a financial institution and a financial intermediary that accepts deposits and channels those deposits into lending activities, either directly by loaning or indirectly through capital markets. A bank is the connection between customers that have capital deficits and customers with capital surpluses.
- In this project some functions of bank like creating a user's account, displaying details of bank account, searching a bank account are implemented.
## Research
[seminar topics](https://www.seminarstopics.com/seminar/6610/bank-account-management-system-project-)
--source
 ## Features and Benefits of project
 Some Features of banks are it deals with all the money-related transactions,Provide loans,provides various payment and withdrawal services to customers ,also provide internet services.
 # Benefits
 - Bank accounts offer convenience
 - Bank accounts are safe
 - It's an easy way to save money
 - Bank accounts are cheaper
 - Bank accounts can help you access credit
 - 
## Cost and Features
![Description](Link to Pic)
-- Content 

## Defining Our System
### Architecture
![Architecture](https://github.com/keshavamurthy5/ltts_stepin_miniproject/blob/main/1_Requirements/Architecture.png)
- Bank Management System application is capable of performing following functions-: . 
    - Add account
    - Deposit Money
    - Withdraw money
    - Display account list
    - Sort accounts
    - Search for an account
    - Reading account details from File
    - Saving all account dtails to File
## SWOT ANALYSIS
![SWOT-Analysis](https://github.com/keshavamurthy5/ltts_stepin_miniproject/blob/main/1_Requirements/swot.jpg)
# 4W&#39;s and 1&#39;H

## Who:
- Small or newly established bank can use this system to provide basic banking facilities to their customers.

## What:
- Many bank still follows a manual hand-written file system which sometimes become very diffficult to manage. If number of customers of a bank increases the traditional process becomes very tedious. So, digitalized banking system can come handy in such cases.

## When:
- The digitalization of banking sector started when Goverment of India launched digital India campaign. This campaign focuses on digital payments, online banking services etc. Since then many IT sectors are working continuously to achieve this dream. This project is also to contribution to this dream.

## Where:
- This project is likely to emerge in all banking and financial sectors.

## How:
- This project may sometime cause issue in creating and storing details of a customer due to issuses in network or due to some other technical glitch. But these problems are common when we are dealing with large number of people.
# Detail requirements
## High Level Requirements:

| ID   | Description                                                                                       | Category  | Status |
|------|---------------------------------------------------------------------------------------------------|-----------|--------|
| HR01 | User should be able to create a new bank account by providing all details.                        | Technical | Done |
| HR02 | User should be able to display all accounts details.                                              | Technical | Done |
| HR03 | User should be able to search for a given account by account number as input.                     | Technical | Done |
| HR04 | User should be able to withdraw from account only if the user have sufficient balance in account. | Technical | Done |
| HR05 | User should not be able to deposit more than the required deposit limit for a day.                | Technical | Done |
| HR06 | User should be able to sort all records based on account number.                                  | Technical | Done |
| HR07 | User should be able to sort all records based on owner's name                                     | Technical | Done |
| HR08 | User should be able to calculate interest on given sum.                                           | Technical | Done |
| HR09 | When user quits the system all the transaction or changes made by the user should be saved.       | Scenario  | Done |
| HR10 | Data of all the users should be protected.                                                        | Scenario  | Done |

##  Low level Requirements:
| ID   | Description                                                                                                                                                                                                              | HLR ID     | Status (Implemented/Future) |
|------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------|-----------------------------|
| LR01 | All the required information should be asked from user while registration and account number should be unique for all users. If account number is already present in records then that account should not be registered. | HR01       | Done                      |
| LR02 | User data should be displayed either by taking account number as input or by taking user's first name as input.                                                                                                          | HR02       | Done                     |
| LR03 | To search for a particular user either it's account no. or user name can be given.                                                                                                                                       | HR03       | Done                      |
| LR04 | If user wants to withdraw money which is greater than the available balance then a message stating that "Insufficient Balance" should be displayed.                                                                      | HR04       | Done                      |
| LR05 | If the user has crossed the daily transaction limit then user should not be able to deposit money.                                                                                                                       | HR05       | FUTURE                      |
| LR06 | If the user record is not present then a message stating that "User not Registered" should be dispalyed.                                                                                                                 | HR03       | Done                      |
| LR07 | After sorting of all records user should be able to view the sorted result.                                                                                                                                              | HR04, HR05 | Done                     |
| LR08 | If user gives wrong input then a message stating that "Wrong Input" should be displayed.                                                                                                                                 | HR06       | Done                      |
| LR09 | When a user quits then system should be prompted to save new records to file.                                                                                                                                            | HR07       | Done                     |
| LR10 | Encryption algorithm can be used to protect user data.                                                                                                                                                                   | HR08       | FUTURE                      |
