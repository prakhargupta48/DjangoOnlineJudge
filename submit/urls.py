from django.urls import path
from submit.views import submit
from .views import combined_page_view

urlpatterns = [
    path('<int:id>/', submit, name="submit"),
    path('combined/', combined_page_view, name='combined_page'),
]