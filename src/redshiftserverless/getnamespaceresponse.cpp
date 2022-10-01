// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnamespaceresponse.h"
#include "getnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetNamespaceResponse
 * \brief The GetNamespaceResponse class provides an interace for RedshiftServerless GetNamespace responses.
 *
 * \inmodule QtAwsRedshiftServerless
 *
 *  This is an interface reference for Amazon Redshift Serverless. It contains documentation for one of the programming or
 *  command line interfaces you can use to manage Amazon Redshift Serverless.
 * 
 *  </p
 * 
 *  Amazon Redshift Serverless automatically provisions data warehouse capacity and intelligently scales the underlying
 *  resources based on workload demands. Amazon Redshift Serverless adjusts capacity in seconds to deliver consistently high
 *  performance and simplified operations for even the most demanding and volatile workloads. Amazon Redshift Serverless
 *  lets you focus on using your data to acquire new insights for your business and customers.
 * 
 *  </p
 * 
 *  To learn more about Amazon Redshift Serverless, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What is Amazon Redshift Serverless</a>.
 *
 * \sa RedshiftServerlessClient::getNamespace
 */

/*!
 * Constructs a GetNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
GetNamespaceResponse::GetNamespaceResponse(
        const GetNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetNamespaceResponsePrivate(this), parent)
{
    setRequest(new GetNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNamespaceRequest * GetNamespaceResponse::request() const
{
    Q_D(const GetNamespaceResponse);
    return static_cast<const GetNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetNamespace \a response.
 */
void GetNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetNamespaceResponsePrivate
 * \brief The GetNamespaceResponsePrivate class provides private implementation for GetNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetNamespaceResponsePrivate object with public implementation \a q.
 */
GetNamespaceResponsePrivate::GetNamespaceResponsePrivate(
    GetNamespaceResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetNamespace response element from \a xml.
 */
void GetNamespaceResponsePrivate::parseGetNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
