## Database
A database is a collection of related data which represents some aspect of the real world. A database system is designed to be built and populated with data for a certain task.

## Database Management System (DBMS) 
- DBMS is a software for storing and retrieving users' data while considering appropriate security measures. 
- It consists of a group of programs which manipulate the database. 
- The DBMS accepts the request for data from an application and instructs the operating system to provide the specific data. 
- In large systems, a DBMS helps users and other third-party software to store and retrieve data.
- Database management systems wee developed to handle the following difficulties of typical File-processing systems supported by conventional operating systems.
1.	Data redundancy and inconsistency
2.	Difficulty in accessing data
3.	Data isolation – multiple files and formats
4.	Integrity problems
5.	Atomicity of updates
6.	Concurrent access by multiple users
7.	Security problems

## ER diagram:
- ER diagram or Entity Relationship diagram is a conceptual model that gives the graphical representation of the logical structure of the database.
- It shows all the constraints and relationships that exist among the different components.
- An ER diagram is mainly composed of following three components- Entity Sets, Attributes and Relationship Set.
- Roll_no is a primary key that can identify each entity uniquely.
- Thus, by using a student's roll number, a student can be identified uniquely.

## Entity Set:
An entity set is a set of the same type of entities.
- Strong Entity Set:
- A strong entity set is an entity set that contains sufficient attributes to uniquely identify all its entities.
- In other words, a primary key exists for a strong entity set.
- Primary key of a strong entity set is represented by underlining it.

## Weak Entity Set:
- A weak entity set is an entity set that does not contain sufficient attributes to uniquely identify its entities.
- In other words, a primary key does not exist for a weak entity set.
- However, it contains a partial key called a discriminator.
- Discriminator can identify a group of entities from the entity set.
- Discriminator is represented by underlining with a dashed line.

## Relationship:
A relationship is defined as an association among several entities.
- **Unary Relationship Set** - Unary relationship set is a relationship set where only one entity set participates in a relationship set.
- **Binary Relationship Set** - Binary relationship set is a relationship set where two entity sets participate in a relationship set.
- **Ternary Relationship Set** - Ternary relationship set is a relationship set where three entity sets participate in a relationship set.
- **N-ary Relationship Set** - N-ary relationship set is a relationship set where ‘n’ entity sets participate in a relationship set.

## Cardinality Constraint:
Cardinality constraint defines the maximum number of relationship instances in which an entity can participate.
- **One-to-One Cardinality** - An entity in set A can be associated with at most one entity in set B. An entity in set B can be associated with at most one entity in set A.
- **One-to-Many Cardinality** - An entity in set A can be associated with any number (zero or more) of entities in set B. An entity in set B can be associated with at most one entity in set A.
- **Many-to-One Cardinality** - An entity in set A can be associated with at most one entity in set B. An entity in set B can be associated with any number of entities in set A.
- **Many-to-Many Cardinality** - An entity in set A can be associated with any number (zero or more) of entities in set B. An entity in set B can be associated with any number (zero or more) of entities in set A.

## Attributes:
Attributes are the descriptive properties which are owned by each entity of an Entity Set.

## Types of Attributes:
- **Simple Attributes** - Simple attributes are those attributes which cannot be divided further. Ex. Age
- **Composite Attributes** - Composite attributes are those attributes which are composed of many other simple attributes. Ex. Name, Address
- **Multi Valued Attributes** - Multi valued attributes are those attributes which can take more than one value for a given entity from an entity set. Ex. Mobile No, Email ID 
- **Derived Attributes** - Derived attributes are those attributes which can be derived from other attribute(s). Ex. Age can be derived from DOB.
- **Key Attributes** - Key attributes are those attributes which can identify an entity uniquely in an entity set. Ex. Roll No.

## Constraints:
Relational constraints are the restrictions imposed on the database contents and operations. They ensure the correctness of data in the database.

- **Domain Constraint** - Domain constraint defines the domain or set of values for an attribute. It specifies that the value taken by the attribute must be the atomic value from its domain.
- **Tuple Uniqueness Constraint** - Tuple Uniqueness constraint specifies that all the tuples must be necessarily unique in any relation.
- **Key Constraint** - All the values of the primary key must be unique. The value of the primary key must not be null.
- **Entity Integrity Constraint** - Entity integrity constraint specifies that no attribute of primary key must contain a null value in any relation.
- **Referential Integrity Constraint** - It specifies that all the values taken by the foreign key must either be available in the relation of the primary key or be null.

## Closure of an Attribute Set:
The set of all those attributes which can be functionally determined from an attribute set is called a closure of that attribute set.

## Keys ✅
A key is a set of attributes that can identify each tuple uniquely in the given relation. 

## Types of Keys:
- **Super Key**
   - A super key is a set of single and multiple key attributes which is used to identify records in a table. 
   - The super key is a superset of the candidate key.

- **Candidate Key**
   - A set of minimal attribute(s) that can identify each tuple uniquely in the given relation is called a candidate key.
   - The value of the candidate key field must be unique and always be not NULL for every tuple.
   - There can be more than one candidate key in a table or a relation.
   - Removing any field from the candidate key fails in identifying each record uniquely.

- **Primary Key**
   - A primary key is a set of fields in a database table that uniquely identifies each record in that table. The value of the primary key cannot be NULL.
   - A table is allowed to have only one primary key
   - The value of a primary key field should always be unique.

- **Alternate Key** 
   - Those keys which are not selected as the primary key from the candidate keys are called as the alternate keys. 
   - These keys are also known as the secondary keys.

- **Foreign Key**
   - A foreign key is an attribute in one table that acts as a primary key in another table. 
   - The foreign key is useful for establishing the relationship between two tables in a database.

- **Composite Key**
   - A composite key is a key which is a combination of two or more fields (attributes) that uniquely identify each record in the table.

- **Unique Key**
   - It is unique for all the records of the table. Once assigned, its value cannot be changed i.e. it is non-updatable. 
   - It may have a NULL value.

## Functional Dependency:
In any relation, a functional dependency α → β holds if- Two tuples having same value of attribute α also have same value for attribute β.

## Types of Functional Dependency:
- **Trivial Functional Dependencies**
   - A functional dependency X → Y is said to be trivial if and only if Y ⊆ X.
   - Thus, if RHS of a functional dependency is a subset of LHS, then it is called a trivial functional dependency.
   
- **Non-Trivial Functional Dependencies**
   - A functional dependency X → Y is said to be non-trivial if and only if Y ⊄ X.
   - Thus, if there exists at least one attribute in the RHS of a functional dependency that is not a part of LHS, then it is called a non-trivial functional dependency.

## Decomposition of a Relation:
The process of breaking up or dividing a single relation into two or more sub relations is called the decomposition of a relation.

## Properties of Decomposition:
- **Lossless Decomposition** ensures
   - No information is lost from the original relation during decomposition. o When the sub relations are joined back, the same relation is obtained that was decomposed.
- **Dependency Preservation** ensures
   - None of the functional dependencies that hold on the original relation are lost. o The sub relations still hold or satisfy the functional dependencies of the original relation.

## Types of Decomposition:
- **Lossless Join Decomposition:**
   - Consider there is a relation R which is decomposed into sub relations R1, R2, …., Rn.
   - This decomposition is called lossless join decomposition when the join of the sub relations results in the same relation R that was decomposed.
   - For lossless join decomposition, we always have- R1 ⋈ R2 ⋈ R3 ……. ⋈ Rn = R where ⋈ is a natural join operator
- **Lossy Join Decomposition:**
   - Consider there is a relation R which is decomposed into sub relations R1, R2, …., Rn.
   - This decomposition is called lossy join decomposition when the join of the sub relations does not result in the same relation R that was decomposed.
   - For lossy join decomposition, we always have- R1 ⋈ R2 ⋈ R3 ……. ⋈ Rn ⊃ R where ⋈ is a natural join operator

## Normalization ✅
- Normalization is a technique of organizing the data in the database.
- It is a systematic approach which is used to remove or reduce data redundancy in the tables and remove the insert, update and delete anomalies.
- It mainly divides the larger table into smaller tables and links them using a relationship to increase the clarity of data.

## Anomalies:
- **Insertion Anomaly:** 
   - Suppose a new faculty joins the University, and the Database Administrator inserts the faculty data into the table. 
   - But he is not able to insert because Sid is a primary key, and can’t be NULL. 
   - So this type of anomaly is known as an insertion anomaly.

- **Delete Anomaly:**
   - When the Database Administrator wants to delete the student details of Sid=2 from the table.
   - Then it will delete the faculty and course information too which cannot be recovered further.

- **Update Anomaly:**
   - When the Database Administrator wants to change the salary of faculty F1 from 30000 to 40000 in above table University
   - Then the database will update salary in more than one row due to data redundancy. 
   - So, this is an update anomaly in a table.

## Types of Normal Forms ✅
- **First Normal Form (1NF):** A given relation is called in First Normal Form (1NF) if each cell of the table contains only an atomic value i.e. if the attribute of every tuple is either single valued or a null value.
- **Second Normal Form (2NF):** A given relation is called in Second Normal Form (2NF) if and only if
   - Relation already exists in 1NF.
   - No partial dependency exists in the relation.
A → B is called a partial dependency if and only if A is a subset of some candidate key and B is a non-prime attribute.

- **Third Normal Form (3NF):** A given relation is called in Third Normal Form (3NF) if and only if
   - Relation already exists in 2NF.
   - No transitive dependency exists for non-prime attributes.
A → B is called a transitive dependency if and only if A is not a super key and B is a non-prime attribute.

- **Boyce-Codd Normal Form:** A given relation is called in BCNF if and only if
   - Relation already exists in 3NF.
   - For each non-trivial functional dependency ‘A → B’, A is a super key of the relation.
- **Fourth Normal Form:** A relation is in 4NF if it satisfies the following conditions:
   - A relation is in BCNF
   - and, there is no multivalued dependency exists in the relation.
 
## Denormalization ✅
Denormalization is a technique used to merge data from multiple tables into a single table that can be queried quickly.

## Transaction:
Transaction is a single logical unit of work formed by a set of operations.

### Operations in Transaction:
- **Read Operation** - Read(A) instruction will read the value of ‘A’ from the database and will store it in the buffer in main memory.
- **Write Operation** – Write(A) will write the updated value of ‘A’ from the buffer to the database.

## Transaction States:
- **Active State** –
   - This is the first state in the life cycle of a transaction.
   - A transaction is called in an active state as long as its instructions are getting executed.
   - All the changes made by the transaction now are stored in the buffer in main memory.

- **Partially Committed State** –
   - After the last instruction of the transaction has been executed, it enters into a partially committed state.
   - After entering this state, the transaction is considered to be partially committed.
   - It is not considered fully committed because all the changes made by the transaction are still stored in the buffer in main memory.

- **Committed State** –
   - After all the changes made by the transaction have been successfully stored into the database, it enters into a committed state.
   - Now, the transaction is considered to be fully committed.

- **Failed State** –
   - When a transaction is getting executed in the active state or partially committed state and some failure occurs due to which it becomes impossible to continue the execution, it enters into a failed state.
 
- **Aborted State** –
   - After the transaction has failed and entered into a failed state, all the changes made by it have to be undone.
   - To undo the changes made by the transaction, it becomes necessary to roll back the transaction.
   - After the transaction has rolled back completely, it enters into an aborted state.

- **Terminated State** –
   - This is the last state in the life cycle of a transaction.
   - After entering the committed state or aborted state, the transaction finally enters into a terminated state where its life cycle finally comes to an end.

## Transactions
- A transaction is a collection of logically related operations which reads and possibly updates the various data items in the database. 
- Usually, a transaction is initiated by a user program written in SQL
## ACID Properties ✅
To ensure the consistency of the database, certain properties are followed by all the transactions occurring in the system. These properties are called as ACID Properties of a transaction.

- **Atomicity** 
   - This property ensures that either the transaction occurs completely or it does not occur at all.
   - Basically, it ensures that no transaction occurs partially.

- **Consistency** –
   - This property ensures that integrity constraints are maintained.
   - In other words, it ensures that the database remains consistent before and after the transaction.

- **Isolation** –
   - This property states that a data of transaction T1 which is in execution, then transaction T2 cannot access the result of transaction T1 until the operations of a transaction T1 is completed. 
   - Or, we can say that a user cannot perform the same operation in multiple transactions at the same time. The execution of all transaction should be isolated from other transaction.

- **Durability** –
   - This property ensures that all the changes made by a transaction after its successful execution are written successfully to the disk.
   - It also ensures that these changes exist permanently and are never lost even if there occurs a failure of any kind.

## Schedules:
The order in which the operations of multiple transactions appear for execution is called as a schedule.
- **Serial Schedules** –
   - All the transactions execute serially one after the other.
   - When one transaction executes, no other transaction is allowed to execute.
   - Serial schedules are always- Consistent, Recoverable, Cascadeless and Strict.

- **Non-Serial Schedules** –
   - Multiple transactions execute concurrently.
   - Operations of all the transactions are inter leaved or mixed with each other.
   - Non-serial schedules are not always- Consistent, Recoverable, Cascadeless and Strict.

## Serializability
- Some non-serial schedules may lead to inconsistency of the database.
- Serializability is a concept that helps to identify which non-serial schedules are correct and will maintain the consistency of the database.

## Serializable Schedules –
- If a given non-serial schedule of ‘n’ transactions is equivalent to some serial schedule of ‘n’ transactions, then it is called as a serializable schedule.
- Serializable schedules are always- Consistent, Recoverable, Cascadeless and Strict.
 
## Types of Serializability –
- **Conflict Serializability** - If a given non-serial schedule can be converted into a serial schedule by swapping its non-conflicting operations, then it is called a conflict serializable schedule.
- **View Serializability** - If a given schedule is found to be viewed as equivalent to some serial schedule, then it is called a view serializable schedule.

## Non-Serializable Schedules –
- A non-serial schedule which is not serializable is called a non-serializable schedule. 
- A non-serializable schedule is not guaranteed to produce the same effect as produced by some serial schedule on any consistent database.
- Non-serializable schedules- may or may not be consistent, may or may not be recoverable.

## Irrecoverable Schedules –
If in a schedule <br/>
- A transaction performs a dirty read operation from an uncommitted transaction
- And commits before the transaction from which it has read the value then such a schedule is known as an Irrecoverable Schedule.

## Recoverable Schedules –
If in a schedule <br/>
- A transaction performs a dirty read operation from an uncommitted transaction
- And its commit operation is delayed till the uncommitted transaction either commits or roll backs
then such a schedule is known as a Recoverable Schedule.

## Types of Recoverable Schedules –
- **Cascading Schedule** - If in a schedule, failure of one transaction causes several other dependent transactions to rollback or abort, then such a schedule is called as a Cascading Schedule or Cascading Rollback or Cascading Abort.
- **Cascadeless Schedule** - If in a schedule, a transaction is not allowed to read a data item until the last transaction that has written it is committed or aborted, then such a schedule is called as a Cascadeless Schedule.
- **Strict Schedule** - If in a schedule, a transaction is neither allowed to read nor write a data item until the last transaction that has written it is committed or aborted, then such a schedule is called as a Strict Schedule.
 
## Joins ✅
Joins are the combination of related tuples from the two different relations or tables into a single type. 

## Types of Joins ✅
- **Inner Join:**
    - It takes all the records from both tables until and unless the conditions match. 
    - It means this join will return only those common rows in both tables.

- **Left Join:**
    - The left join returns all the records from (left table) table one, whether the record in table 2 matches or not, according to the join condition. 
    - The record, which matches their result set is the same as the inner join result, and all uncommon records from another table will result in null.

- **Right Join:**
    - In Right Outer, join for both tables will return all the records from table 2, whether the record in table 1 matches or not to the join condition. - The record which matches their result set is the same as the inner join result, and all nonmatching records from another table will result in null.

- **Full Join:**
    - Full Join returns the output, which matches rows and unmatched rows between the two tables. Full Join is the same as Cross Join.

- **Self Join:** 
    - is used to join a table to itself as if the table wee two tables, temporarily remaining at least one table in the SQL statement.

- **Cross Join:** 
    - returns the cartesian product of the sets of records from the two or more joined tables.

## File Structures:
- **Primary Index:** A primary index is an ordered file, records of fixed length with two fields. First field is the same as the primary key as a data file and the second field is a pointer to the data block, where the key is available. The average number of block accesses using index = log2 Bi + 1, where Bi = number of index blocks.
- **Clustering Index:** Clustering index is created on data file whose records are physically ordered on a non-key field (called Clustering field).
- **Secondary Index:** Secondary index provides secondary means of accessing a file for which primary access already exists.


## B Trees
At every level , we have Key and Data Pointer and data pointer points to either block or record.

## Properties of B-Trees:
- Root of B-tree can have children between 2 and P, where P is Order of tree.
- Order of tree – Maximum number of children a node can have.
- Internal node can have children between ⌈ P/2 ⌉ and P Internal node can have keys between ⌈ P/2 ⌉ – 1 and P-1 B+ Trees

In B+ trees, the structure of leaf and non-leaf are different, so their order is. Order of non-leaf will be higher as compared to leaf nodes. Searching time will be less in B+ trees, since it doesn’t have record pointers in non-leaf because of which depth will decrease.
