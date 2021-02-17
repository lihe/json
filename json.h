//
// Created by Leslie on 2021/2/17.
//

#ifndef JSON_JSON_H
#define JSON_JSON_H

typedef enum {
    JSON_NULL,
    JSON_FALSE,
    JSON_TRUE,
    JSON_NUMBER,
    JSON_STRING,
    JSON_ARRAY,
    JSON_OBJECT
} json_type;

typedef struct{
    json_type type;
}json_value;

enum {
    JSON_PARSE_OK = 0,
    JSON_PARSE_EXPECT_VALUE,
    JSON_PARSE_INVALID_VALUE,
    JSON_RESET_ROOT_NOT_SINGULAR
};

int json_parse(json_value *v, const char *json);

json_type json_get_type(const json_value *v);
#endif //JSON_JSON_H
