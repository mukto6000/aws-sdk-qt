// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createemailtemplateresponse.h"
#include "createemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateEmailTemplateResponse
 * \brief The CreateEmailTemplateResponse class provides an interace for SESv2 CreateEmailTemplate responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::createEmailTemplate
 */

/*!
 * Constructs a CreateEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEmailTemplateResponse::CreateEmailTemplateResponse(
        const CreateEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEmailTemplateRequest * CreateEmailTemplateResponse::request() const
{
    Q_D(const CreateEmailTemplateResponse);
    return static_cast<const CreateEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 CreateEmailTemplate \a response.
 */
void CreateEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateEmailTemplateResponsePrivate
 * \brief The CreateEmailTemplateResponsePrivate class provides private implementation for CreateEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateEmailTemplateResponsePrivate object with public implementation \a q.
 */
CreateEmailTemplateResponsePrivate::CreateEmailTemplateResponsePrivate(
    CreateEmailTemplateResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateEmailTemplate response element from \a xml.
 */
void CreateEmailTemplateResponsePrivate::parseCreateEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
