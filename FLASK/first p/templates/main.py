# integrated HTML with Flask 
# HTTP verb GET and POST
# jinja 2 template engine 

from flask import Flask, redirect,url_for, render_template, request

##WSGI application
app = Flask(__name__)

@app.route('/')
def home():
    # return "Hello, Flask!! welcome!!"
    return render_template('index.html')

@app.route('/members')
def members():
    return "Hello, Flask!! welcome members!!"


# a> variable rules
@app.route('/success/<int:score>')
def success(score):
    # return "The person has passed and the score is " + str(score)
    # return "<html><body><h1>The Result is Passed.</h1></body></html>"

    res = " "
    if score >= 250:
        res = "PASS"
    else:
        res = "FAIL"
    return render_template('result.html', result=res)

@app.route('/fail/<int:score>')
def fail(score):
    return render_template('result.html', result="Failed")

# b> URL building
@app.route('/results/<int:marks>')
def results(marks): ##result checker
    result = ""
    if marks >= 50:
        result = 'success'
    else:
        result = 'fail'
    return redirect(url_for(result, score=marks))

# Result Checker HTML submitted page........................ 
@app.route('/submit',methods=['POST','GET'])
def submit():
    total_marks = 0
    avg_marks = 0
    if request.method == 'POST':
        Science = float(request.form['Science'])
        Math = float(request.form['Math'])
        English = float(request.form['English'])
        History = float(request.form['History'])
        Geography = float(request.form['Geography'])
        total_marks = (Science + Math + English + History + Geography)
        avg_marks = total_marks / 5
        
    # return render_template('index.html', total=total_marks, average=avg_marks, result=results)
    return redirect(url_for('success', score=total_marks))

if __name__ == '__main__':
    app.run(debug=True)
