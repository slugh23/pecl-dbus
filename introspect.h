xmlNode *php_dbus_find_interface_node(xmlDocPtr doc, char *interface);
xmlNode *php_dbus_find_method_node(xmlNode *root, char *method);
xmlNode *php_dbus_find_property_node(xmlNode *root, char *property);
xmlNode **php_dbus_get_next_sig(xmlNode **it, char **sig);
char *php_dbus_property_type(xmlNode *root, char **access);
