/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listfunctioneventinvokeconfigsresponse.h"
#include "listfunctioneventinvokeconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListFunctionEventInvokeConfigsResponse
 * \brief The ListFunctionEventInvokeConfigsResponse class provides an interace for Lambda ListFunctionEventInvokeConfigs responses.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::listFunctionEventInvokeConfigs
 */

/*!
 * Constructs a ListFunctionEventInvokeConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFunctionEventInvokeConfigsResponse::ListFunctionEventInvokeConfigsResponse(
        const ListFunctionEventInvokeConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListFunctionEventInvokeConfigsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionEventInvokeConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFunctionEventInvokeConfigsRequest * ListFunctionEventInvokeConfigsResponse::request() const
{
    Q_D(const ListFunctionEventInvokeConfigsResponse);
    return static_cast<const ListFunctionEventInvokeConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda ListFunctionEventInvokeConfigs \a response.
 */
void ListFunctionEventInvokeConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFunctionEventInvokeConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::ListFunctionEventInvokeConfigsResponsePrivate
 * \brief The ListFunctionEventInvokeConfigsResponsePrivate class provides private implementation for ListFunctionEventInvokeConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListFunctionEventInvokeConfigsResponsePrivate object with public implementation \a q.
 */
ListFunctionEventInvokeConfigsResponsePrivate::ListFunctionEventInvokeConfigsResponsePrivate(
    ListFunctionEventInvokeConfigsResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda ListFunctionEventInvokeConfigs response element from \a xml.
 */
void ListFunctionEventInvokeConfigsResponsePrivate::parseListFunctionEventInvokeConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionEventInvokeConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
