// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlambdafunctionsresponse.h"
#include "listlambdafunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ListLambdaFunctionsResponse
 * \brief The ListLambdaFunctionsResponse class provides an interace for Connect ListLambdaFunctions responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::listLambdaFunctions
 */

/*!
 * Constructs a ListLambdaFunctionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLambdaFunctionsResponse::ListLambdaFunctionsResponse(
        const ListLambdaFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new ListLambdaFunctionsResponsePrivate(this), parent)
{
    setRequest(new ListLambdaFunctionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLambdaFunctionsRequest * ListLambdaFunctionsResponse::request() const
{
    Q_D(const ListLambdaFunctionsResponse);
    return static_cast<const ListLambdaFunctionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect ListLambdaFunctions \a response.
 */
void ListLambdaFunctionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLambdaFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::ListLambdaFunctionsResponsePrivate
 * \brief The ListLambdaFunctionsResponsePrivate class provides private implementation for ListLambdaFunctionsResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ListLambdaFunctionsResponsePrivate object with public implementation \a q.
 */
ListLambdaFunctionsResponsePrivate::ListLambdaFunctionsResponsePrivate(
    ListLambdaFunctionsResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect ListLambdaFunctions response element from \a xml.
 */
void ListLambdaFunctionsResponsePrivate::parseListLambdaFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLambdaFunctionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
