Group 4 Assignment
Tables & Forms in HTML
Group 4: Tables & Forms

This assignment covers the fundamental concepts of HTML tables and forms, their structure, styling basics, and real-world use cases. The goal is to understand how tables organize data and how forms collect user input on web pages.

Presentation Outline

Table Structure (table, tr, td, th)

Table Styling Basics

Purpose of Forms

Input Types in Forms

Labels, Placeholders, and Basic Validation

Real-World Use Cases

1. Table Structure (table, tr, td, th)

HTML tables are used to display data in rows and columns.

<table>

Creates a table.

All table rows and data are placed inside this tag.

<tr> – Table Row

Represents a horizontal row in a table.

Groups table cells together.

<td> – Table Data

Represents a standard data cell.

Used for normal table content.

<th> – Table Header

Represents a header cell.

Used for column or row titles such as Name, Email, or Course.

Text is bold and centered by default.

colspan

Used to merge two or more columns.

Example: colspan="2" allows one cell to span across two columns.

2. Table Styling Basics (CSS)

Tables can be styled using CSS to improve appearance and readability.

Common styling properties include:

border: Adds borders around table cells

border-collapse: collapse;: Removes double borders

padding: Adds space inside table cells

background-color: Changes the background color

text-align: Aligns text (left, center, right)

width: 100%;: Makes the table occupy full page width

3. What Forms Are Used For

HTML forms allow users to enter and submit information to a server.

Forms are commonly used for:

User registration

Login systems

Surveys and questionnaires

Booking systems

Payment forms

Forms collect data using:

Text fields

Radio buttons

Checkboxes

Drop-down lists

Buttons

4. Input Types in Forms

Different input types are used depending on the data required.

Text Input
<input type="text">


Used for names, usernames, and general text.

Email Input
<input type="email">


Ensures the input contains @ and a valid email format.

Date Input
<input type="date">


Allows users to select a date from a calendar.

Radio Buttons
<input type="radio">


Used when only one option can be selected (e.g., Male or Female).

Checkboxes
<input type="checkbox">


Used when multiple options can be selected.

Dropdown List
<select>
  <option>Option</option>
</select>


Creates a list of selectable options.

Submit Button
<button type="submit">


Sends form data to the server.

5. Labels, Placeholders, and Basic Validation
<label>

Describes what an input field is for.

Improves accessibility.

Clicking the label focuses the input when for matches the input id.

placeholder

Displays light instructional text inside an input field.

Example: placeholder="Enter your name"

Basic Validation

Some input types (like email) automatically validate user input.

Required fields can be enforced using required.

6. Real-World Use Cases
Form Input Use Cases

Text input: Names, usernames, addresses

Email input: Account creation, email notifications

Date input: Birthdays, booking dates

Radio buttons: Gender selection, payment methods

Checkboxes: Skills, interests, course selection

Dropdowns: Faculties, categories, countries

Submit button: Sending data to a server

Table Use Cases

Student lists

Payment reports

Inventory management

Attendance records

Price listings
