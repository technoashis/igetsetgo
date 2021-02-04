from flask import Flask, Blueprint
import logging
import settings
import endpoint

app= Flask(__name__)

def configure_app(flask_app):
    flask_app.config['SWAGGER_UI_DOC_EXPANSION'] = settings.SWAGGER_UI_DOC_EXPANSION

def initialize_app(flask_app):
    # Initialize Blueprint
    blueprint = Blueprint('api', __name__, url_prefix='')
    endpoint.api.init_app(blueprint)
    endpoint.api.add_namespace(endpoint.ns)
    flask_app.register_blueprint(blueprint)

def main():
    log = logging.getLogger(__name__)
    initialize_app(app)
    log.info('>>>>> Starting development server at http://127.0.0.1:{}/api/\
    <<<<<'.format(settings.FLASK_PORT))
    app.run(host='127.0.0.1', port=settings.FLASK_PORT, debug=settings.FLASK_DEBUG)


if __name__ == "__main__":
    main()

if __name__ != "__main__":
    initialize_app(app)
