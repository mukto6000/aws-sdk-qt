// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createusagelimitresponse.h"
#include "createusagelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateUsageLimitResponse
 * \brief The CreateUsageLimitResponse class provides an interace for RedshiftServerless CreateUsageLimit responses.
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
 * \sa RedshiftServerlessClient::createUsageLimit
 */

/*!
 * Constructs a CreateUsageLimitResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUsageLimitResponse::CreateUsageLimitResponse(
        const CreateUsageLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new CreateUsageLimitResponsePrivate(this), parent)
{
    setRequest(new CreateUsageLimitRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUsageLimitRequest * CreateUsageLimitResponse::request() const
{
    Q_D(const CreateUsageLimitResponse);
    return static_cast<const CreateUsageLimitRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless CreateUsageLimit \a response.
 */
void CreateUsageLimitResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUsageLimitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::CreateUsageLimitResponsePrivate
 * \brief The CreateUsageLimitResponsePrivate class provides private implementation for CreateUsageLimitResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateUsageLimitResponsePrivate object with public implementation \a q.
 */
CreateUsageLimitResponsePrivate::CreateUsageLimitResponsePrivate(
    CreateUsageLimitResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless CreateUsageLimit response element from \a xml.
 */
void CreateUsageLimitResponsePrivate::parseCreateUsageLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUsageLimitResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws
