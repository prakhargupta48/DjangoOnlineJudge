from django.shortcuts import render
from problems.models import Problem
from submit.forms import CodeSubmissionForm
from submit.views import submit
from django.contrib.auth.decorators import login_required

# Create your views here.
@login_required
def problems_list(request):
    problems = Problem.objects.all()
    return render(request, 'problems_list1.html', {'problems': problems})

@login_required
def problem_details(request,id):
    problems = Problem.objects.get(id=id)
    form = CodeSubmissionForm()
    context = {
        'problems' : problems,
        'form' : form,
    }
    return render(request, 'submit/cp.html', context)
