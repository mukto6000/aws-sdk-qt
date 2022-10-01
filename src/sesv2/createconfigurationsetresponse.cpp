// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationsetresponse.h"
#include "createconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateConfigurationSetResponse
 * \brief The CreateConfigurationSetResponse class provides an interace for SESv2 CreateConfigurationSet responses.
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
 * \sa SESv2Client::createConfigurationSet
 */

/*!
 * Constructs a CreateConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationSetResponse::CreateConfigurationSetResponse(
        const CreateConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationSetRequest * CreateConfigurationSetResponse::request() const
{
    Q_D(const CreateConfigurationSetResponse);
    return static_cast<const CreateConfigurationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 CreateConfigurationSet \a response.
 */
void CreateConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateConfigurationSetResponsePrivate
 * \brief The CreateConfigurationSetResponsePrivate class provides private implementation for CreateConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateConfigurationSetResponsePrivate object with public implementation \a q.
 */
CreateConfigurationSetResponsePrivate::CreateConfigurationSetResponsePrivate(
    CreateConfigurationSetResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateConfigurationSet response element from \a xml.
 */
void CreateConfigurationSetResponsePrivate::parseCreateConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
