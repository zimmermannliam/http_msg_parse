/* HTTP Parse API */

/* Copyright (c) 2023 Liam Zimmermann
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef HTTP_HEADER_PARSE_H
#define HTTP_HEADER_PARSE_H

#define EVIL_NEWLINES 1

int http_msg_get_hdr_field_val(char *msg_str, const char *field_name, char *buf, size_t buf_len);
int http_msg_get_method(char *msg_str);

enum // Order based on RFC2616
{
    HTTP_METHOD_OPTIONS     = 2,
    HTTP_METHOD_GET         = 3,
    HTTP_METHOD_HEAD        = 4,
    HTTP_METHOD_POST        = 5,
    HTTP_METHOD_PUT         = 6,
    HTTP_METHOD_DELETE      = 7,
    HTTP_METHOD_TRACE       = 8,
    HTTP_METHOD_CONNECT     = 9
};

#endif
