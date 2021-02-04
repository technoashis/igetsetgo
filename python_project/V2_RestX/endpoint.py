
from flask import request
from flask_restx import Resource, Api, fields

api = Api(version='1.0', title="User", description=('Accounts Service'))
ns = api.namespace('test', description='Operations related to user')

model = api.model('Model', {
    'Name': fields.String,
})

@ns.route('/')
class UserDetails(Resource):
    @ns.marshal_with(model)
    def get(self):
        """ Get the details of all user """
        user_details = [
            {"Name" :  "Ashis"},
            {"Name" :  "Sambit"},
            {"Name" :  "Lipsita"},
        ]
        return user_details
@ns.route('/<int:id>')
class UserDetail(Resource):
    # @ns.marshal_with(model)
    def get(self):
        """ Get the details of a user """
        user_details = {"Name" :  "Ashis"}
        return user_details
