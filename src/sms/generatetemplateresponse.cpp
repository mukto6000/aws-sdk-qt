// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatetemplateresponse.h"
#include "generatetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GenerateTemplateResponse
 * \brief The GenerateTemplateResponse class provides an interace for Sms GenerateTemplate responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::generateTemplate
 */

/*!
 * Constructs a GenerateTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateTemplateResponse::GenerateTemplateResponse(
        const GenerateTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GenerateTemplateResponsePrivate(this), parent)
{
    setRequest(new GenerateTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateTemplateRequest * GenerateTemplateResponse::request() const
{
    Q_D(const GenerateTemplateResponse);
    return static_cast<const GenerateTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms GenerateTemplate \a response.
 */
void GenerateTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::GenerateTemplateResponsePrivate
 * \brief The GenerateTemplateResponsePrivate class provides private implementation for GenerateTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GenerateTemplateResponsePrivate object with public implementation \a q.
 */
GenerateTemplateResponsePrivate::GenerateTemplateResponsePrivate(
    GenerateTemplateResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms GenerateTemplate response element from \a xml.
 */
void GenerateTemplateResponsePrivate::parseGenerateTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
