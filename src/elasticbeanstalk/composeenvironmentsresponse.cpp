// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "composeenvironmentsresponse.h"
#include "composeenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ComposeEnvironmentsResponse
 * \brief The ComposeEnvironmentsResponse class provides an interace for ElasticBeanstalk ComposeEnvironments responses.
 *
 * \inmodule QtAwsElasticBeanstalk
 *
 *  <fullname>AWS Elastic Beanstalk</fullname>
 * 
 *  AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 *  on the Amazon Web Services
 * 
 *  cloud>
 * 
 *  For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 *  Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 *  href="https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::composeEnvironments
 */

/*!
 * Constructs a ComposeEnvironmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ComposeEnvironmentsResponse::ComposeEnvironmentsResponse(
        const ComposeEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new ComposeEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ComposeEnvironmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ComposeEnvironmentsRequest * ComposeEnvironmentsResponse::request() const
{
    Q_D(const ComposeEnvironmentsResponse);
    return static_cast<const ComposeEnvironmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticBeanstalk ComposeEnvironments \a response.
 */
void ComposeEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ComposeEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticBeanstalk::ComposeEnvironmentsResponsePrivate
 * \brief The ComposeEnvironmentsResponsePrivate class provides private implementation for ComposeEnvironmentsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ComposeEnvironmentsResponsePrivate object with public implementation \a q.
 */
ComposeEnvironmentsResponsePrivate::ComposeEnvironmentsResponsePrivate(
    ComposeEnvironmentsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * Parses a ElasticBeanstalk ComposeEnvironments response element from \a xml.
 */
void ComposeEnvironmentsResponsePrivate::parseComposeEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ComposeEnvironmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
