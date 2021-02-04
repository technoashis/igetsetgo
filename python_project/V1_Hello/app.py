from flask import Flask
import logging
import settings

app= Flask(__name__)

def initialize_app(flask_app):
    pass

def main():
    log = logging.getLogger(__name__)
    initialize_app(app)
    log.info('>>>>> Starting development server at http://0.0.0.0:{}/api/\
    <<<<<'.format(settings.FLASK_PORT))
    app.run(host='0.0.0.0', port=settings.FLASK_PORT, debug=settings.FLASK_DEBUG)

@app.route('/testing')
def hello_world_testing():
    return 'Hello, World! Testing'

@app.route('/')
def hello_world():
    return '<html><body><H1>Hello, World!<H1></body></html>'

if __name__ == "__main__":
    main()

if __name__ != "__main__":
    initialize_app(app)
