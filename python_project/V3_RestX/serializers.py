from endpoint import api
from flask_restx import fields

user_common =  api.model('user_common',{
    'firstName':fields.String('Enter First Name'),
    'lastName':fields.String('Enter Last Name'),
    'email':fields.String('Enter Email'),
    'mobile':fields.String('Enter Mobile Number'),
    'role':fields.Integer('Enter the mobile ID')
})

user_creation_request = api.inherit('user_creation_request',user_common,{
    'password':fields.String('Enter Password')
})

user_details_response = api.inherit('user_details_response',user_common,{
    'id':fields.Integer('User ID')
})

student_creation_request = api.inherit('student_creation_request',user_creation_request,{
    'branchID':fields.Integer('Enter Branch ID'),
    'rollNumber':fields.String('Roll Number'),
})

student_details_response = api.inherit('student_details_response',user_details_response,{
    'branchID':fields.Integer('Enter Branch ID'),
    'rollNumber':fields.String('Roll Number'),
})
teacher_creation_request = api.inherit('teacher_creation_request',user_creation_request,{
    'departmentID':fields.Integer('departmentID'),
    'designationID':fields.String('designationID'),
    'empNumber':fields.String('empNumber'),
})

teacher_details_response = api.inherit('teacher_details_response',user_details_response,{
    'departmentID':fields.Integer('departmentID'),
    'designationID':fields.String('designationID'),
    'empNumber':fields.String('empNumber'),
})