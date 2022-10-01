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

#include "getcredentialsresponse.h"
#include "getcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetCredentialsResponse
 * \brief The GetCredentialsResponse class provides an interace for RedshiftServerless GetCredentials responses.
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
 * \sa RedshiftServerlessClient::getCredentials
 */

/*!
 * Constructs a GetCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCredentialsResponse::GetCredentialsResponse(
        const GetCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCredentialsRequest * GetCredentialsResponse::request() const
{
    Q_D(const GetCredentialsResponse);
    return static_cast<const GetCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetCredentials \a response.
 */
void GetCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetCredentialsResponsePrivate
 * \brief The GetCredentialsResponsePrivate class provides private implementation for GetCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetCredentialsResponsePrivate object with public implementation \a q.
 */
GetCredentialsResponsePrivate::GetCredentialsResponsePrivate(
    GetCredentialsResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetCredentials response element from \a xml.
 */
void GetCredentialsResponsePrivate::parseGetCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
