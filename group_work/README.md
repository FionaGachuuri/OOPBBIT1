# Group 4 Assignment
## Tables & Forms in HTML

This assignment covers the fundamentals of **HTML tables and forms**, their structure, styling basics, and real-world use cases.

---

## Presentation Outline

- Table Structure (`table`, `tr`, `td`, `th`)
- Table Styling Basics
- Purpose of Forms
- Input Types in Forms
- Labels, Placeholders, and Basic Validation
- Real-World Use Cases

---

## Table Structure

HTML tables display data in rows and columns.

**Table Tags**:

- `<table>`: Creates a table. All rows and data go inside this tag.
- `<tr>`: Table row. Groups table cells horizontally.
- `<td>`: Table data. Standard cell for normal content.
- `<th>`: Table header. Used for column or row titles (e.g., Name, Email). Text is bold and centered by default.
- `colspan="2"`: Merges two or more columns.

---

## Table Styling Basics (CSS)

You can style tables to make them more readable:

- `border`: Adds borders around cells
- `border-collapse: collapse`: Removes double borders
- `padding`: Adds space inside cells
- `background-color`: Changes background color
- `text-align`: Controls text alignment (left, center, right)
- `width: 100%`: Makes the table stretch full width

---

## Purpose of Forms

HTML forms collect user input and send it to a server.  
Forms are commonly used for:

- User registration
- Login systems
- Surveys and questionnaires
- Booking systems
- Payment forms

Forms collect data via:

- Text fields
- Radio buttons
- Checkboxes
- Drop-down lists
- Buttons

---

## Input Types in Forms

- `text`: General text input (names, usernames)
- `email`: Validates email format with `@`
- `date`: Lets user select a date from a calendar
- `radio`: Choose **one** option from many (e.g., Male or Female)
- `checkbox`: Choose **multiple** options
- `select` / `option`: Dropdown list
- `button type="submit"`: Sends form data to server

---

## Labels, Placeholders, and Basic Validation

- `<label>`: Describes input fields. Improves accessibility. Clicking the label focuses the field if `for="id"` matches the input `id`.
- `placeholder`: Light text inside input showing an example or instruction
- Validation: Certain input types like `email` or `required` ensure proper data

---

## Real-World Use Cases

**Form Inputs**:

- Text input: Names, addresses
- Email input: Account creation, receipts
- Date input: Birthdays, booking dates
- Radio buttons: Gender selection, payment methods
- Checkboxes: Skills, interests, multiple courses
- Dropdown: Faculties, categories, countries
- Submit button: Sending data to server

**Tables**:

- Student lists
- Payment reports
- Inventory management
- Attendance records
- Price listings
