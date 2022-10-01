// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassessmenttemplateresponse.h"
#include "createassessmenttemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateAssessmentTemplateResponse
 * \brief The CreateAssessmentTemplateResponse class provides an interace for Inspector CreateAssessmentTemplate responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createAssessmentTemplate
 */

/*!
 * Constructs a CreateAssessmentTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssessmentTemplateResponse::CreateAssessmentTemplateResponse(
        const CreateAssessmentTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new CreateAssessmentTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateAssessmentTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssessmentTemplateRequest * CreateAssessmentTemplateResponse::request() const
{
    Q_D(const CreateAssessmentTemplateResponse);
    return static_cast<const CreateAssessmentTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector CreateAssessmentTemplate \a response.
 */
void CreateAssessmentTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssessmentTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::CreateAssessmentTemplateResponsePrivate
 * \brief The CreateAssessmentTemplateResponsePrivate class provides private implementation for CreateAssessmentTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateAssessmentTemplateResponsePrivate object with public implementation \a q.
 */
CreateAssessmentTemplateResponsePrivate::CreateAssessmentTemplateResponsePrivate(
    CreateAssessmentTemplateResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector CreateAssessmentTemplate response element from \a xml.
 */
void CreateAssessmentTemplateResponsePrivate::parseCreateAssessmentTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssessmentTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
