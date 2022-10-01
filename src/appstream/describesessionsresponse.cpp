// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesessionsresponse.h"
#include "describesessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeSessionsResponse
 * \brief The DescribeSessionsResponse class provides an interace for AppStream DescribeSessions responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::describeSessions
 */

/*!
 * Constructs a DescribeSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSessionsResponse::DescribeSessionsResponse(
        const DescribeSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeSessionsResponsePrivate(this), parent)
{
    setRequest(new DescribeSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSessionsRequest * DescribeSessionsResponse::request() const
{
    Q_D(const DescribeSessionsResponse);
    return static_cast<const DescribeSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeSessions \a response.
 */
void DescribeSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeSessionsResponsePrivate
 * \brief The DescribeSessionsResponsePrivate class provides private implementation for DescribeSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeSessionsResponsePrivate object with public implementation \a q.
 */
DescribeSessionsResponsePrivate::DescribeSessionsResponsePrivate(
    DescribeSessionsResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeSessions response element from \a xml.
 */
void DescribeSessionsResponsePrivate::parseDescribeSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
