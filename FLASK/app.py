from flask import Flask, redirect,url_for

##WSGI application
app = Flask(__name__)

@app.route('/')
def home():
    return "Hello, Flask!! welcome!!"

@app.route('/members')
def members():
    return "Hello, Flask!! welcome members!!"
# a> variable rules
@app.route('/success/<int:score>')
def success(score):
    # return "The person has passed and the score is " + str(score)
    return "<html><body><h1>The Result is Passed.</h1></body></html>"

@app.route('/fail/<int:score>')
def fail(score):
    return "The person has failed and the score is " + str(score)

# b> URL building
@app.route('/results/<int:marks>')
def results(marks): ##result checker
    result = ""
    if marks >= 50:
        result = 'success'
    else:
        result = 'fail'
    return redirect(url_for(result, score=marks))

if __name__ == '__main__':
    app.run(debug=True)

# building URL dynamically
# two ways- a> variable rules b> URL building 


