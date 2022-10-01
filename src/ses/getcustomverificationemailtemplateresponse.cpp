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

#include "getcustomverificationemailtemplateresponse.h"
#include "getcustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetCustomVerificationEmailTemplateResponse
 * \brief The GetCustomVerificationEmailTemplateResponse class provides an interace for Ses GetCustomVerificationEmailTemplate responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getCustomVerificationEmailTemplate
 */

/*!
 * Constructs a GetCustomVerificationEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetCustomVerificationEmailTemplateResponse::GetCustomVerificationEmailTemplateResponse(
        const GetCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new GetCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCustomVerificationEmailTemplateRequest * GetCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const GetCustomVerificationEmailTemplateResponse);
    return static_cast<const GetCustomVerificationEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetCustomVerificationEmailTemplate \a response.
 */
void GetCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetCustomVerificationEmailTemplateResponsePrivate
 * \brief The GetCustomVerificationEmailTemplateResponsePrivate class provides private implementation for GetCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
GetCustomVerificationEmailTemplateResponsePrivate::GetCustomVerificationEmailTemplateResponsePrivate(
    GetCustomVerificationEmailTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetCustomVerificationEmailTemplate response element from \a xml.
 */
void GetCustomVerificationEmailTemplateResponsePrivate::parseGetCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCustomVerificationEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
