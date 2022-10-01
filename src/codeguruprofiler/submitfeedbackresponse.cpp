// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "submitfeedbackresponse.h"
#include "submitfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::SubmitFeedbackResponse
 * \brief The SubmitFeedbackResponse class provides an interace for CodeGuruProfiler SubmitFeedback responses.
 *
 * \inmodule QtAwsCodeGuruProfiler
 *
 *  This section provides documentation for the Amazon CodeGuru Profiler API operations.
 * 
 *  </p
 * 
 *  Amazon CodeGuru Profiler collects runtime performance data from your live applications, and provides recommendations
 *  that can help you fine-tune your application performance. Using machine learning algorithms, CodeGuru Profiler can help
 *  you find your most expensive lines of code and suggest ways you can improve efficiency and remove CPU bottlenecks.
 * 
 *  </p
 * 
 *  Amazon CodeGuru Profiler provides different visualizations of profiling data to help you identify what code is running
 *  on the CPU, see how much time is consumed, and suggest ways to reduce CPU utilization.
 * 
 *  </p <note>
 * 
 *  Amazon CodeGuru Profiler currently supports applications written in all Java virtual machine (JVM) languages and Python.
 *  While CodeGuru Profiler supports both visualizations and recommendations for applications written in Java, it can also
 *  generate visualizations and a subset of recommendations for applications written in other JVM languages and
 * 
 *  Python> </note>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/what-is-codeguru-profiler.html">What is Amazon CodeGuru
 *  Profiler</a> in the <i>Amazon CodeGuru Profiler User Guide</i>.
 *
 * \sa CodeGuruProfilerClient::submitFeedback
 */

/*!
 * Constructs a SubmitFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
SubmitFeedbackResponse::SubmitFeedbackResponse(
        const SubmitFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeGuruProfilerResponse(new SubmitFeedbackResponsePrivate(this), parent)
{
    setRequest(new SubmitFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SubmitFeedbackRequest * SubmitFeedbackResponse::request() const
{
    Q_D(const SubmitFeedbackResponse);
    return static_cast<const SubmitFeedbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeGuruProfiler SubmitFeedback \a response.
 */
void SubmitFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SubmitFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeGuruProfiler::SubmitFeedbackResponsePrivate
 * \brief The SubmitFeedbackResponsePrivate class provides private implementation for SubmitFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a SubmitFeedbackResponsePrivate object with public implementation \a q.
 */
SubmitFeedbackResponsePrivate::SubmitFeedbackResponsePrivate(
    SubmitFeedbackResponse * const q) : CodeGuruProfilerResponsePrivate(q)
{

}

/*!
 * Parses a CodeGuruProfiler SubmitFeedback response element from \a xml.
 */
void SubmitFeedbackResponsePrivate::parseSubmitFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubmitFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeGuruProfiler
} // namespace QtAws
