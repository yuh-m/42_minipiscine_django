#!/usr/bin/python3
# coding: utf-8

from elem import Elem, Text


class Html(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="html", attr=attribute, content=content, tag_type="double")


class Head(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="head", attr=attribute, content=content, tag_type="double")


class Body(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="body", attr=attribute, content=content, tag_type="double")


class Title(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(
            tag="title", attr=attribute, content=content, tag_type="double"
        )


class Meta(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="meta", attr=attribute, content=content, tag_type="simple")


class Img(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="img", attr=attribute, content=content, tag_type="simple")


class Table(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(
            tag="table", attr=attribute, content=content, tag_type="double"
        )


class Th(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="th", attr=attribute, content=content, tag_type="double")


class Tr(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="tr", attr=attribute, content=content, tag_type="double")


class Td(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="td", attr=attribute, content=content, tag_type="double")


class Ul(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="ul", attr=attribute, content=content, tag_type="double")


class Ol(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="ol", attr=attribute, content=content, tag_type="double")


class Li(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="li", attr=attribute, content=content, tag_type="double")


class H1(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="h1", attr=attribute, content=content, tag_type="double")


class H2(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="h2", attr=attribute, content=content, tag_type="double")


class P(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="p", attr=attribute, content=content, tag_type="double")


class Div(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="div", attr=attribute, content=content, tag_type="double")


class Span(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="span", attr=attribute, content=content, tag_type="double")


class Hr(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="hr", attr=attribute, content=content, tag_type="simple")


class Br(Elem):
    def __init__(self, content=None, attribute={}):
        super().__init__(tag="br", attr=attribute, content=content, tag_type="simple")


def test():
    title = Text('"Hello ground!"')
    header1 = Text('"Oh no, not again!"')
    img_src = {"src": "http://i.imgur.com/pfp3T.jpg"}
    html = Html(
                [Head(
                        [Title([title])]
                    ),
                Body(
                        [H1([header1]),
                        Img(attribute=img_src)
                        ]
                    )
                ]
            )
    print(html)

if __name__ == "__main__":
    test()
