#include<Python.h>

/* module code*/

// sample library
// #include <math.h>

//Objects example Vector -- 2-dimention vectors
/*
typedef struct {
	PyObject_HEAD // czêœæ inicjalizacyjna
		double x, y; // wspó³rzêdne
} Vector;*/
// Constructor 
/*static PyObject *Vector__new__(
	PyTypeObject *type, PyObject *args) {
	return type->tp_alloc(type, 0);
}
*/

// Destructor
/*
static void Vector__del__(Vector *self) {
	Py_TYPE(self)->tp_free((PyObject *)self);
}*/

// Init 
/*
static int Vector__init__(
	Vector *self, PyObject *args) {
	double x = 0.0, y = 0.0;
	if (PyArg_ParseTuple(args, "|dd", &x, &y)) {
		self->x = x;
		self->y = y;
		return 0;
	}
	return -1;
}*/// Functions
/*static PyObject *VectorNorm(Vector *self) {
	return PyFloat_FromDouble(sqrt(
		self->x * self->x + self->y * self->y));
}
*/
// Get
/*
static PyObject *VectorX(Vector *self) {
	return PyFloat_FromDouble(self->x);
}
static PyObject *VectorY(Vector *self) {
	return PyFloat_FromDouble(self->y);
}*/
// Conversion to string
/*
static PyObject *Vector__str__(Vector *self) {
	PyObject *x = PyFloat_FromDouble(self->x);
	PyObject *y = PyFloat_FromDouble(self->y);
	PyObject *r =
		PyUnicode_FromFormat("(%S,%S)", x, y);
	Py_XDECREF(x);
	Py_XDECREF(y);
	return r;
}
*/

// List of class function and desciription
/*
static PyMethodDef VectorMethods[] = {
	{ "norm", (PyCFunction)VectorNorm, METH_NOARGS,
	"Return the norm." },
	{ "x", (PyCFunction)VectorX, METH_NOARGS,
	"Return the first coordinate." },
	{ "y", (PyCFunction)VectorY, METH_NOARGS,
	"Return the second coordinate." },
	{ NULL }
};*/// Description of Type
/*
static PyTypeObject VectorType = {
	PyVarObject_HEAD_INIT(NULL,0) // inicjalizacja
	"vector.Vector", // nazwa
	sizeof(Vector), // rozmiar
	0, //
	(destructor)Vector__del__, // destruktor
	0,0,0,0,0,0,0,0,0,0, //
	(reprfunc)Vector__str__, // obiekt->napis
	0,0,0, //
	Py_TPFLAGS_DEFAULT, //
	"2-dimensional vectors.", // opis	0,0,0,0,0,0, //
	VectorMethods, // metody
	0,0,0,0,0,0,0, //
	(initproc)Vector__init__, // inicjalizator
	0, //
	(newfunc)Vector__new__ // konstruktor
	} ;*/// Module description
/*
static PyModuleDef vector_module = {
	PyModuleDef_HEAD_INIT,
	"vector",
	"Implementation of 2-dimensional vectors.",
	-1,
	NULL, NULL, NULL, NULL, NULL
};*/// Init module
/*
PyMODINIT_FUNC PyInit_vector(void) {
	if (PyType_Ready(&VectorType) < 0) return NULL;
	PyObject* m = PyModule_Create(&vector_module);
	if (m == NULL) return NULL;
	Py_INCREF(&VectorType);
	PyModule_AddObject(m, "Vector",
		(PyObject *)&VectorType);
	return m;
}*/


PyMODINIT_FUNC Py_Init_Graph(void)
{
	/* initial code to modole */
}
