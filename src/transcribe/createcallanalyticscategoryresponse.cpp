// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcallanalyticscategoryresponse.h"
#include "createcallanalyticscategoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateCallAnalyticsCategoryResponse
 * \brief The CreateCallAnalyticsCategoryResponse class provides an interace for Transcribe CreateCallAnalyticsCategory responses.
 *
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 *
 * \sa TranscribeClient::createCallAnalyticsCategory
 */

/*!
 * Constructs a CreateCallAnalyticsCategoryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCallAnalyticsCategoryResponse::CreateCallAnalyticsCategoryResponse(
        const CreateCallAnalyticsCategoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new CreateCallAnalyticsCategoryResponsePrivate(this), parent)
{
    setRequest(new CreateCallAnalyticsCategoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCallAnalyticsCategoryRequest * CreateCallAnalyticsCategoryResponse::request() const
{
    Q_D(const CreateCallAnalyticsCategoryResponse);
    return static_cast<const CreateCallAnalyticsCategoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe CreateCallAnalyticsCategory \a response.
 */
void CreateCallAnalyticsCategoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCallAnalyticsCategoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::CreateCallAnalyticsCategoryResponsePrivate
 * \brief The CreateCallAnalyticsCategoryResponsePrivate class provides private implementation for CreateCallAnalyticsCategoryResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateCallAnalyticsCategoryResponsePrivate object with public implementation \a q.
 */
CreateCallAnalyticsCategoryResponsePrivate::CreateCallAnalyticsCategoryResponsePrivate(
    CreateCallAnalyticsCategoryResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe CreateCallAnalyticsCategory response element from \a xml.
 */
void CreateCallAnalyticsCategoryResponsePrivate::parseCreateCallAnalyticsCategoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCallAnalyticsCategoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
