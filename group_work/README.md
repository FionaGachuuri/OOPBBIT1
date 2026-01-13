Group 4 Assignment. 
GROUP 4: TABLES & FORMS
Presentation Outline
1. Table structure (table, tr, td, th)
2. Table styling basics
3. What forms are used for
4. Input types
5. Labels, placeholders, basic validation
6. Real-world use cases

TABLE STRUCTURE (table, tr, td, th)
<table>
This tag creates a table.
Everything inside it represents rows and columns.

<tr> → Table Row
"tr" stands for table row.
It groups data into horizontal rows.

<td> → Table Data
"td" means table data cell.
It is used for normal table content.

<th> → Table Header
"th" means table heading cell.
It is used for labels or titles of columns.
Text inside <th> is bold and centered by default.
Example: Name, Email, Course, etc.

colspan="2" → Merges columns
Used when one cell should span across multiple columns.

2. TABLE STYLING BASICS (CSS)
border -	Adds border around cells
border-collapse: collapse;-	Removes double borders
padding	- Space inside cells
background-color-	Changes background color
text-align-	Controls alignment (left, center, right)
width: 100%;-	Makes table stretch full width

3. WHAT FORMS ARE USED FOR
HTML forms allow users to enter information that can be submitted to a server.
Forms are used for:
    User registration
    Login systems
    Surveys and questionnaires
    Booking systems
    Payment forms

Forms collect data through:
    Text fields
    Radio buttons
    Checkboxes
    Drop-down lists
    Buttons

4. INPUT TYPES IN FORMS
<input type="text">
For general text (names, usernames, etc.).

<input type="email">
Checks for @ and a valid email format.

<input type="date">
Allows the user to pick a date from a calendar.

<input type="radio">
Used when selecting one option from many.
Example: Male OR Female (only one can be chosen).

<input type="checkbox">
Used when selecting multiple options.
Example: Multiple courses.

<select>
Creates a dropdown list.

<option>
Individual items inside the dropdown.

<button type="submit">
Sends the form data.

5. LABELS, PLACEHOLDERS & BASIC VALIDATION
<label>
Describes what an input is for.
Helps with accessibility.
Clicking a label focuses the input (if for="id" matches input id="").
placeholder=""
Light text inside an input showing an example or instruction.

6. REAL-WORLD USE CASES
Text input-	Name entry, username, address
Email input- Account creation, receipts
Date input-	Birthdays, booking dates
Radio buttons-	Gender selection, payment methods
Checkboxes-	Selecting skills, interests, multiple courses
Dropdown-	Faculties, categories, countries
Submit button-	Sending data to server

Tables are used for:
    Student lists
    Payment reports
    Inventory management
    Attendance records
    Price listings