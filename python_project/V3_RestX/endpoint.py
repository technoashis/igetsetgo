
from flask import request
from flask_restx import Resource, Api, fields


api = Api(version='1.0', title="API", description=('Accounts Service'))
ns_student = api.namespace('student', description='Operations related to Student')
ns_teacher = api.namespace('teacher', description='Operations related to Teacher')
from serializers import (student_details_response, student_creation_request,
                        teacher_details_response, teacher_creation_request)

@ns_student.route('/')
class StudentCollection(Resource):
    @ns_student.marshal_with(student_details_response)
    def get(self):
        """ Get the details of all Students """
        user_details = {"Name" : "Jabir"}
        return user_details
    
    @ns_student.expect(student_creation_request)
    @ns_student.marshal_with(student_details_response)
    def post(self):
        """ Creat a Student """
        user_details = {}
        return user_details

@ns_student.route('/<int:id>')
class Student(Resource):
    @ns_student.marshal_with(student_details_response)
    def get(self):
        """ Get the details of a Student """
        user_details = {}
        return user_details
    
    @ns_student.expect(student_creation_request)
    @ns_student.marshal_with(student_details_response)
    def put(self):
        """ Update the details of a Student """
        user_details = {}
        return user_details

@ns_teacher.route('/')
class TeacherCollection(Resource):
    @ns_teacher.marshal_with(teacher_details_response)
    def get(self):
        """ Get the details of all Teacher """
        user_details = {}
        return user_details
    
    @ns_teacher.expect(teacher_creation_request)
    @ns_teacher.marshal_with(teacher_details_response)
    def post(self):
        """ Creat a Teacher """
        user_details = {}
        return user_details

@ns_teacher.route('/<int:id>')
class Teacher(Resource):
    @ns_teacher.marshal_with(teacher_details_response)
    def get(self):
        """ Get the details of a Teacher """
        user_details = {}
        return user_details
    
    @ns_teacher.expect(teacher_creation_request)
    @ns_teacher.marshal_with(teacher_details_response)
    def put(self):
        """ Update the details of a Teachear """
        user_details = {}
        return user_details
