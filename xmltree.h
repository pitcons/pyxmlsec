#include <xmlsec/xmltree.h>

PyObject *xmlsec_NodeGetName(PyObject *self, PyObject *args);
PyObject *xmlsec_GetNodeNsHref(PyObject *self, PyObject *args);
PyObject *xmlsec_CheckNodeName(PyObject *self, PyObject *args);
PyObject *xmlsec_GetNextElementNode(PyObject *self, PyObject *args);
PyObject *xmlsec_FindChild(PyObject *self, PyObject *args);
PyObject *xmlsec_FindParent(PyObject *self, PyObject *args);
PyObject *xmlsec_FindNode(PyObject *self, PyObject *args);
PyObject *xmlsec_AddChild(PyObject *self, PyObject *args);
PyObject *xmlsec_AddNextSibling(PyObject *self, PyObject *args);
PyObject *xmlsec_AddPrevSibling(PyObject *self, PyObject *args);
PyObject *xmlsec_ReplaceNode(PyObject *self, PyObject *args);
PyObject *xmlsec_ReplaceContent(PyObject *self, PyObject *args);
PyObject *xmlsec_ReplaceNodeBuffer(PyObject *self, PyObject *args);
PyObject *xmlsec_AddIDs(PyObject *self, PyObject *args);
PyObject *xmlsec_CreateTree(PyObject *self, PyObject *args);
PyObject *xmlsec_IsEmptyNode(PyObject *self, PyObject *args);
PyObject *xmlsec_IsEmptyString(PyObject *self, PyObject *args);
PyObject *xmlsec_IsHex(PyObject *self, PyObject *args);
PyObject *xmlsec_GetHex(PyObject *self, PyObject *args);
